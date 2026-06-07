try:
    a,b,c=4,7,5
    def h(b):
        a-=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=1,8,0
    print(h(a),a,b,c)
    
except: print('error')
