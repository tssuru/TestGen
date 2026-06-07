try:
    a,b,c=1,4,7
    def h(b):
        a=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=8,8,1
    print(h(a),a,b,c)
    
except: print('error')
