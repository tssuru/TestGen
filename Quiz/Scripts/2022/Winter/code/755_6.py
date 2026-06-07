try:
    a,b,c=5,0,9
    def h(b):
        a-=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=7,8,3
    print(h(a),a,b,c)
    
except: print('error')
