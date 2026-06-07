try:
    a,b,c=6,5,7
    def f(b):
        a=4
        b+=3
        c=3
        return a+b+c
    
    a,b,c=8,0,5
    print(f(a),a,b,c)
    
except: print('error')
