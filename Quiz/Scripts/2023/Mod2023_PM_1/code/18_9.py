try:
    a,b,c=5,8,4
    def f(b):
        a+=3
        b=4
        c=5
        return a+b+c
    
    a,b,c=7,6,2
    print(f(a),a,b,c)
    
except: print('error')
