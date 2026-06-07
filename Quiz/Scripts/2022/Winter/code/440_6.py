try:
    a,b,c=6,8,4
    def g(a):
        a+=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=2,1,5
    print(g(a),a,b,c)
    
except: print('error')
