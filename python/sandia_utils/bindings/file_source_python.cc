/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(1)                                                       */
/* BINDTOOL_USE_PYGCCXML(1)                                                        */
/* BINDTOOL_HEADER_FILE(file_source.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(7fdc6351c4af454784930fbd7e7de3af)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/sandia_utils/file_source.h>
// pydoc.h is automatically generated in the build directory
#include <file_source_pydoc.h>

void bind_file_source(py::module& m)
{

    using file_source = ::gr::sandia_utils::file_source;


    py::class_<file_source,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<file_source>>(m, "file_source", D(file_source))

        .def(py::init(&file_source::make),
             py::arg("itemsize"),
             py::arg("filename"),
             py::arg("type"),
             py::arg("repeat") = false,
             py::arg("force_new") = false,
             D(file_source, make))


        .def("seek",
             &file_source::seek,
             py::arg("seek_point"),
             py::arg("whence"),
             D(file_source, seek))


        .def("open",
             &file_source::open,
             py::arg("filename"),
             py::arg("repeat"),
             D(file_source, open))


        .def("close", &file_source::close, D(file_source, close))


        .def("set_begin_tag",
             &file_source::set_begin_tag,
             py::arg("val"),
             D(file_source, set_begin_tag))


        .def("set_file_queue_depth",
             &file_source::set_file_queue_depth,
             py::arg("depth"),
             D(file_source, set_file_queue_depth))


        .def("add_file_tags",
             &file_source::add_file_tags,
             py::arg("tag"),
             D(file_source, add_file_tags))


        .def("set_msg_hop_period",
             &file_source::set_msg_hop_period,
             py::arg("period_ms"),
             D(file_source, set_msg_hop_period))

        ;
}
