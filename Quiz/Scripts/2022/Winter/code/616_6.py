try:
    a,b,c=9,4,2
    def h(b):
        a=3
        b=2
        c=1
        return a+b+c
    
    a,b,c=1,0,8
    print(h(a),a,b,c)
    
except: print('error')
