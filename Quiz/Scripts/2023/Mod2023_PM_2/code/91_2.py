try:
    a,b,c=2,9,8
    def h(b):
        a*=1
        b=2
        c=3
        return a+b+c
    
    a,b,c=5,3,0
    print(h(a),a,b,c)
    
except: print('error')
