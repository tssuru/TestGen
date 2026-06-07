try:
    a,b,c=3,2,1
    def g(a):
        a=1
        b=2
        c=4
        return a+b+c
    
    a,b,c=8,9,0
    print(g(a),a,b,c)
    
except: print('error')
