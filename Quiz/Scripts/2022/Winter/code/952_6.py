try:
    a,b,c=1,8,2
    def f(b):
        a+=3
        b=5
        c=2
        return a+b+c
    
    a,b,c=5,4,9
    print(f(a),a,b,c)
    
except: print('error')
