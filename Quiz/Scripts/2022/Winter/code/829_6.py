try:
    a,b,c=8,6,1
    def f(b):
        a=4
        b-=1
        c=2
        return a+b+c
    
    a,b,c=7,3,9
    print(f(a),a,b,c)
    
except: print('error')
