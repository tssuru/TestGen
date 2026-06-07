try:
    a,b,c=1,5,2
    def h(b):
        a-=5
        b=2
        c=4
        return a+b+c
    
    a,b,c=7,8,2
    print(h(a),a,b,c)
    
except: print('error')
