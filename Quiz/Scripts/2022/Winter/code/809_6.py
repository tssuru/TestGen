try:
    a,b,c=0,9,5
    def g(a):
        a=3
        b-=5
        c=2
        return a+b+c
    
    a,b,c=3,2,8
    print(g(a),a,b,c)
    
except: print('error')
