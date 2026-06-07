try:
    a,b,c=3,4,9
    def h(a):
        a=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=6,2,8
    print(h(a),a,b,c)
    
except: print('error')
