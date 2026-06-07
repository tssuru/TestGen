try:
    a,b,c=3,9,2
    def g(b):
        a=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=4,0,6
    print(g(a),a,b,c)
    
except: print('error')
