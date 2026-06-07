try:
    a,b,c=6,4,7
    def g(a):
        a=1
        b*=3
        c=5
        return a+b+c
    
    a,b,c=0,1,9
    print(g(a),a,b,c)
    
except: print('error')
