try:
    a,b,c=9,4,6
    def f(b):
        a=3
        b-=5
        c=1
        return a+b+c
    
    a,b,c=8,0,2
    print(f(a),a,b,c)
    
except: print('error')
