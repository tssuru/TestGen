try:
    a,b,c=3,8,2
    def h(b):
        a-=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=1,6,5
    print(h(a),a,b,c)
    
except: print('error')
