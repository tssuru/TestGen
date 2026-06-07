try:
    a,b,c=6,2,1
    def g(a):
        a=4
        b+=2
        c=2
        return a+b+c
    
    a,b,c=0,2,6
    print(g(a),a,b,c)
    
except: print('error')
