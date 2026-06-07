try:
    a,b,c=3,8,7
    def h(b):
        a=1
        b-=5
        c=4
        return a+b+c
    
    a,b,c=4,7,2
    print(h(a),a,b,c)
    
except: print('error')
