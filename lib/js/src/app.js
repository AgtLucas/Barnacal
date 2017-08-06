// Generated by BUCKLESCRIPT VERSION 1.8.2, PLEASE EDIT WITH CARE
'use strict';

var Menu        = require("./menu.js");
var React       = require("react");
var Header      = require("./header.js");
var Popover     = require("./popover.js");
var ReasonReact = require("reason-react/lib/js/src/reasonReact.js");

var component = ReasonReact.statelessComponent("Index");

var container_styles = {
  height: "255px"
};

var caret_styles = {
  borderRight: "solid transparent 10px",
  borderBottom: "solid #000 10px",
  borderLeft: "solid transparent 10px",
  content: " ",
  height: "10px",
  left: "50%",
  marginLeft: "-13px",
  position: "absolute",
  top: "0",
  width: "0"
};

function make() {
  var newrecord = component.slice();
  newrecord[/* render */9] = (function () {
      return React.createElement("div", {
                  style: container_styles
                }, ReasonReact.element(/* None */0, /* None */0, Popover.make(/* array */[
                          ReasonReact.element(/* None */0, /* None */0, Header.make(/* array */[])),
                          ReasonReact.element(/* None */0, /* None */0, Menu.make(/* array */[]))
                        ])), React.createElement("div", {
                      style: caret_styles
                    }));
    });
  return newrecord;
}

exports.component        = component;
exports.container_styles = container_styles;
exports.caret_styles     = caret_styles;
exports.make             = make;
/* component Not a pure module */