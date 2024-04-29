<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">	
	<xsl:template match="/">
		<html>
			<body>
			<table border="2">
				<th style="color:red">Player Name</th>
				<th style="color:red">Runs Made</th>
				<th style="color:red">Wickets Taken</th>
				<xsl:for-each select="cricket/performance">
				<xsl:sort select="runs" data-type="number" order="descending"/>
				<xsl:if test="runs &gt; 1000">
					<xsl:if test="wickets &gt; 100">
					<tr>
						<td style="color:yellow"><xsl:value-of select="player"/></td>
						<td style="color:yellow"><xsl:value-of select="runs"/></td>
						<td style="color:yellow"><xsl:value-of select="wickets"/></td>
					</tr>
					</xsl:if>
				</xsl:if>
				</xsl:for-each>
			</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>


