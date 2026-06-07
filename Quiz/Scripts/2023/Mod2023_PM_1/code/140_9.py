try:
    a,b,c=3,0,9
    def g(a):
        a=5
        b=1
        c=4
        return a+b+c
    
    a,b,c=6,1,5
    print(g(a),a,b,c)
    
except: print('error')
