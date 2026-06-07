try:
    a,b,c=6,2,8
    def g(a):
        a+=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=5,4,9
    print(g(a),a,b,c)
    
except: print('error')
