try:
    a,b,c=7,9,5
    def g(a):
        global c
        a=1
        b+=2
        c=3
        return a+b+c
    
    a,b,c=1,4,6
    print(g(a),a,b,c)
    
except: print('error')
