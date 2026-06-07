try:
    a,b,c=1,3,0
    def f(b):
        a=2
        b-=1
        c=5
        return a+b+c
    
    a,b,c=4,5,6
    print(f(a),a,b,c)
    
except: print('error')
