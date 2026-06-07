try:
    a,b,c=0,3,8
    def g(b):
        a+=3
        b=1
        c=3
        return a+b+c
    
    a,b,c=9,3,2
    print(g(a),a,b,c)
    
except: print('error')
