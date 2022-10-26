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
/* BINDTOOL_HEADER_FILE(tag_debug_file.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(120b10af0011e9a7d291070bcbd98f4a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/sandia_utils/tag_debug_file.h>
// pydoc.h is automatically generated in the build directory
#include <tag_debug_file_pydoc.h>

void bind_tag_debug_file(py::module& m)
{

    using tag_debug_file = ::gr::sandia_utils::tag_debug_file;


    py::class_<tag_debug_file,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<tag_debug_file>>(m, "tag_debug_file", D(tag_debug_file))

        .def(py::init(&tag_debug_file::make),
             py::arg("sizeof_stream_item"),
             py::arg("name"),
             py::arg("key_filter"),
             py::arg("filename"),
             D(tag_debug_file, make))


        .def("current_tags",
             &tag_debug_file::current_tags,
             D(tag_debug_file, current_tags))


        .def("num_tags", &tag_debug_file::num_tags, D(tag_debug_file, num_tags))


        .def("set_display",
             &tag_debug_file::set_display,
             py::arg("d"),
             D(tag_debug_file, set_display))


        .def("set_filewrite",
             &tag_debug_file::set_filewrite,
             py::arg("w"),
             py::arg("clear") = false,
             D(tag_debug_file, set_filewrite))


        .def("set_key_filter",
             &tag_debug_file::set_key_filter,
             py::arg("key_filter"),
             D(tag_debug_file, set_key_filter))


        .def("key_filter", &tag_debug_file::key_filter, D(tag_debug_file, key_filter))

        ;
}
