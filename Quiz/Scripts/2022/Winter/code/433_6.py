try:
    a,b,c=7,3,1
    def h(b):
        a=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=0,8,9
    print(h(a),a,b,c)
    
except: print('error')
