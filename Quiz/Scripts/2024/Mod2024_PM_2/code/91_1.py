try:
    a,b,c=1,3,6
    def f(b):
        a+=4
        b=3
        c=1
        return a+b+c
    
    a,b,c=8,9,4
    print(f(a),a,b,c)
    
except: print('error')
