def counter(n)
  count = 1
  while n > 1
    n = cicle(n)
    count += 1
  end
  count
end

def cicle(n)
  if n == 1
    return 1
  end
  if n%2 == 0
    return n/2
  else
    return 3*n+1
  end
end

c = 0
for d in ARGV[0].to_i..ARGV[1].to_i
  t = counter(d)
  c = t if t > c
end

puts "#{ARGV[0]} #{ARGV[1]} #{c}"
