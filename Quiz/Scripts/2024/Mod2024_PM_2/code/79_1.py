try:
    a,b,c=4,7,5
    def f(b):
        a=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=9,2,1
    print(f(a),a,b,c)
    
except: print('error')
