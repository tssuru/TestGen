try:
    a,b,c=3,8,7
    def g(b):
        a=3
        b-=2
        c=1
        return a+b+c
    
    a,b,c=9,4,5
    print(g(a),a,b,c)
    
except: print('error')
