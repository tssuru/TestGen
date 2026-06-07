try:
    a,b,c=0,2,1
    def g(a):
        a=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=3,4,6
    print(g(a),a,b,c)
    
except: print('error')
