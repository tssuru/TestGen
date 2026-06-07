try:
    a,b,c=8,6,9
    def f(b):
        a-=2
        b=2
        c=4
        return a+b+c
    
    a,b,c=7,5,0
    print(f(a),a,b,c)
    
except: print('error')
