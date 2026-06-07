try:
    a,b,c=7,5,7
    def f(b):
        a=1
        b=2
        c=4
        return a+b+c
    
    a,b,c=8,5,1
    print(f(a),a,b,c)
    
except: print('error')
