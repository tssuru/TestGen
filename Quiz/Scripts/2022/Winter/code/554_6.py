try:
    a,b,c=4,2,3
    def g(b):
        global c
        a=1
        b+=2
        c=4
        return a+b+c
    
    a,b,c=9,6,1
    print(g(a),a,b,c)
    
except: print('error')
