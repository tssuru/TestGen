try:
    a,b,c=6,7,3
    def h(a):
        a+=2
        b=4
        c=3
        return a+b+c
    
    a,b,c=1,8,4
    print(h(a),a,b,c)
    
except: print('error')
