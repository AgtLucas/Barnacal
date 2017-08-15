module PackageJSON = {
  external version : string = "version" [@@bs.module ("../../../package.json", "packageJSON")];
};

module Raven = {
  type raven;
  type raven_options = {. release : string};
  external config : string => Js.t raven_options => raven = "config" [@@bs.module "raven-js"];
  external install : unit => unit = "" [@@bs.send.pipe : raven];
};

module Process = {
  external node_env : string = "process.env.NODE_ENV" [@@bs.val];
};

module DOM = {
  type event;
  external add_event_listener : string => (event => unit) => unit =
    "document.addEventListener" [@@bs.val];
  external hidden : bool = "document.hidden" [@@bs.val];
};

module DateFns = {
  type date = float;
  type format_options = {locale: string};
  external format_date : date => string => string = "date-fns/format" [@@bs.module];
  external format_date_with_options : date => string => format_options => string =
    "date-fns/format" [@@bs.module];
  external get_year : date => int = "date-fns/get_year" [@@bs.module];
  external get_days_in_month : date => int = "date-fns/get_days_in_month" [@@bs.module];
  external set_date_unsafe : date => int => string = "date-fns/set_date" [@@bs.module];
  external get_day : date => int = "date-fns/get_day" [@@bs.module];
  external get_time : string => date = "date-fns/get_time" [@@bs.module];
  external is_today : date => bool = "date-fns/is_today" [@@bs.module];
  external add_months : date => int => date = "date-fns/add_months" [@@bs.module];
  external sub_months : date => int => date = "date-fns/sub_months" [@@bs.module];
  external start_of_month_unsafe : date => string = "date-fns/start_of_month" [@@bs.module];
  let set_date date int => set_date_unsafe date int |> get_time;
  let start_of_month date => start_of_month_unsafe date |> get_time;
};
