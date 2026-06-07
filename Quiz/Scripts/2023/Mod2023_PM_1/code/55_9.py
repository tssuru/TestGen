try:
    a,b,c=1,6,2
    def h(b):
        a-=4
        b=2
        c=4
        return a+b+c
    
    a,b,c=4,8,2
    print(h(a),a,b,c)
    
except: print('error')
