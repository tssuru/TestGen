try:
    a,b,c=9,4,0
    def g(b):
        a-=3
        b=4
        c=1
        return a+b+c
    
    a,b,c=5,3,2
    print(g(a),a,b,c)
    
except: print('error')
