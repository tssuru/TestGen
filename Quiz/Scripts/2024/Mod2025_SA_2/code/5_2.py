try:
    a,b,c=5,2,6
    def f(b):
        a-=4
        b=3
        c=5
        return a+b+c
    
    a,b,c=3,8,9
    print(f(a),a,b,c)
except: print('error')
