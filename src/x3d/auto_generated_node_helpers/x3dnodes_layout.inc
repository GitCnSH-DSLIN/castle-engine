{ -*- buffer-read-only: t -*-

  Copyright 2015-2021 Michalis Kamburelis.

  This file is part of "Castle Game Engine".

  "Castle Game Engine" is free software; see the file COPYING.txt,
  included in this distribution, for details about the copyright.

  "Castle Game Engine" is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

  ----------------------------------------------------------------------------
}

{ Automatically generated node properties.

  Do not edit this file manually!
  To add new properties:
  - add them to the text files in tools/internal/x3d-nodes-to-pascal/nodes-specification/ ,
  - and regenerate include files by running x3d-nodes-to-pascal .

  The documentation for properties should go to x3dnodes_documentation.txt . }

{$ifdef read_interface}

  public
    { Set X3D field "align". } { }
    procedure SetAlign(const Value: array of string);
    { Set X3D field "align". } { }
    procedure SetAlign(const Value: TCastleStringList);
    { Set X3D field "offset". } { }
    procedure SetOffset(const Value: array of Single);
    { Set X3D field "offset". } { }
    procedure SetOffset(const Value: TSingleList);
    { Set X3D field "offsetUnits". } { }
    procedure SetOffsetUnits(const Value: array of string);
    { Set X3D field "offsetUnits". } { }
    procedure SetOffsetUnits(const Value: TCastleStringList);
    { Set X3D field "scaleMode". } { }
    procedure SetScaleMode(const Value: array of string);
    { Set X3D field "scaleMode". } { }
    procedure SetScaleMode(const Value: TCastleStringList);
    { Set X3D field "size". } { }
    procedure SetSize(const Value: array of Single);
    { Set X3D field "size". } { }
    procedure SetSize(const Value: TSingleList);
    { Set X3D field "sizeUnits". } { }
    procedure SetSizeUnits(const Value: array of string);
    { Set X3D field "sizeUnits". } { }
    procedure SetSizeUnits(const Value: TCastleStringList);

{$endif read_interface}

{$ifdef read_implementation}

{ TLayoutNode ----------------------------------------------- }

procedure TLayoutNode.SetAlign(const Value: array of string);
begin
  FdAlign.Send(Value);
end;

procedure TLayoutNode.SetAlign(const Value: TCastleStringList);
begin
  FdAlign.Send(Value);
end;

procedure TLayoutNode.SetOffset(const Value: array of Single);
begin
  FdOffset.Send(Value);
end;

procedure TLayoutNode.SetOffset(const Value: TSingleList);
begin
  FdOffset.Send(Value);
end;

procedure TLayoutNode.SetOffsetUnits(const Value: array of string);
begin
  FdOffsetUnits.Send(Value);
end;

procedure TLayoutNode.SetOffsetUnits(const Value: TCastleStringList);
begin
  FdOffsetUnits.Send(Value);
end;

procedure TLayoutNode.SetScaleMode(const Value: array of string);
begin
  FdScaleMode.Send(Value);
end;

procedure TLayoutNode.SetScaleMode(const Value: TCastleStringList);
begin
  FdScaleMode.Send(Value);
end;

procedure TLayoutNode.SetSize(const Value: array of Single);
begin
  FdSize.Send(Value);
end;

procedure TLayoutNode.SetSize(const Value: TSingleList);
begin
  FdSize.Send(Value);
end;

procedure TLayoutNode.SetSizeUnits(const Value: array of string);
begin
  FdSizeUnits.Send(Value);
end;

procedure TLayoutNode.SetSizeUnits(const Value: TCastleStringList);
begin
  FdSizeUnits.Send(Value);
end;

{$endif read_implementation}
