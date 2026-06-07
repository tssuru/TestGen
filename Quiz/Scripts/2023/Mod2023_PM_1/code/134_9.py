try:
    a,b,c=3,9,7
    def g(b):
        a=3
        b*=3
        c=5
        return a+b+c
    
    a,b,c=5,3,1
    print(g(a),a,b,c)
    
except: print('error')
