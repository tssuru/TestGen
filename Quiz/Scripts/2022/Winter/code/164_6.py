try:
    a,b,c=2,3,8
    def g(b):
        a+=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=7,4,9
    print(g(a),a,b,c)
    
except: print('error')
