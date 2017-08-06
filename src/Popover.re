let component = ReasonReact.statelessComponent "Popover";

let popover_styles =
  ReactDOMRe.Style.make
    borderRadius::"5px"
    height::"270px"
    width::"300px"
    padding::"0"
    backgroundColor::"#000"
    margin::"0 auto"
    marginTop::"10px"
    position::"relative"
    cursor::"default"
    ();

let make children => {
  ...component,
  render: fun _self => ReasonReact.createDomElement "div" props::{"style": popover_styles} children
};
