try:
    a,b,c=3,4,6
    def f(b):
        a=5
        b=3
        c=4
        return a+b+c
    
    a,b,c=8,9,0
    print(f(a),a,b,c)
    
except: print('error')
