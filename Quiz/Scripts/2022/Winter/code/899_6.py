try:
    a,b,c=0,4,2
    def g(a):
        a=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=3,6,9
    print(g(a),a,b,c)
    
except: print('error')
