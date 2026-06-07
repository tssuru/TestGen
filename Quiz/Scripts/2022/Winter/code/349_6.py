try:
    a,b,c=0,4,3
    def g(a):
        a=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=7,2,9
    print(g(a),a,b,c)
    
except: print('error')
