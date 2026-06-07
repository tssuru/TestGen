try:
    a,b,c=1,0,6
    def f(b):
        a+=1
        b=3
        c=4
        return a+b+c
    
    a,b,c=4,8,3
    print(f(a),a,b,c)
    
except: print('error')
