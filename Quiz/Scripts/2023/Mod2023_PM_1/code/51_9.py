try:
    a,b,c=1,7,8
    def g(b):
        a+=5
        b=4
        c=2
        return a+b+c
    
    a,b,c=4,5,3
    print(g(a),a,b,c)
    
except: print('error')
