try:
    a,b,c=2,8,6
    def g(a):
        a+=5
        b=1
        c=3
        return a+b+c
    
    a,b,c=1,9,7
    print(g(a),a,b,c)
    
except: print('error')
