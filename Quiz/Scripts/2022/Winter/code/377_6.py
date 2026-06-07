try:
    a,b,c=0,7,5
    def g(b):
        a=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=1,4,0
    print(g(a),a,b,c)
    
except: print('error')
