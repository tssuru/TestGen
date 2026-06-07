try:
    a,b,c=3,1,0
    def h(b):
        a=2
        b*=4
        c=5
        return a+b+c
    
    a,b,c=4,8,2
    print(h(a),a,b,c)
    
except: print('error')
