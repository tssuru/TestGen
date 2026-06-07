try:
    a,b,c=4,6,2
    def f(b):
        a=2
        b*=1
        c=3
        return a+b+c
    
    a,b,c=3,9,1
    print(f(a),a,b,c)
    
except: print('error')
